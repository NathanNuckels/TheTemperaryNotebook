* = $8000
 
     .word coldstart            ; coldstart vector
     .word warmstart            ; warmstart vector
     .byte $C3,$C2,$CD,$38,$30  ; "CBM8O". Autostart string
 
coldstart
     sei
     stx $d016
     jsr $fda3 ;Prepare IRQ
     jsr $fd50 ;Init memory. Rewrite this routine to speed up boot process.
     jsr $fd15 ;Init I/O
     jsr $ff5b ;Init video
     cli
 
warmstart
; Insert your code here
     inc $d020
     jmp *-3
 
* = $9fff                     ; fill up to -$9fff (or $bfff if 16K)
     .byte 0

;This ASM is written for DASM.
;The first few bytes of the file depend on the file format.

;Cartridge Header
        ORG 0
        [insert CRT header here]
        
        RORG $8000
        .word coldstart
        .word warmstart
        .hex C3C2CD3830
coldstart
        sei
        stx $d016
        jsr $fda3
        jsr $fd50
        jsr $fd15
        jsr $ff5b
        cli
warmstart
        ;set bit 0 of $0001 to 0 to disable BASIC
        lda $01
        and #%11111110
        sta $01
        ;set bit 1 of $D018 to 1 to enable lowercase
        lda $d018
        ora #%00000010
        sta $d018
        ;set everything from $0400 to $07FF to all be $02 to clear the screen
        lda #$20
        ldx #0 ;depending on your compiler, you might need to write #$00 instead
.loop   sta $0400,x
        sta $0500,x
        sta $0600,x
        sta $0700,x
        dex
        bne .loop
Program
        ...
        
        

;PRG header
        ORG 0
        .HEX 0108
        RORG $0801
        ;This says '255 SYS2061' in basic. I hope...
        ;         255  SYS 2  0  6  1
        .HEX 0A08 FF00 9E 32 30 36 31 000000
        
warmstart
        ;set bit 0 of $0001 to 0 to disable BASIC
        lda $01
        and #%11111110
        sta $01
        ;set bit 1 of $D018 to 1 to enable lowercase
        lda $d018
        ora #%00000010
        sta $d018
        ;set everything from $0400 to $07FF to all be $02 to clear the screen
        lda #$20
        ldx #0 ;depending on your compiler, you might need to write #$00 instead
.loop   sta $0400,x
        sta $0500,x
        sta $0600,x
        sta $0700,x
        dex
        bne .loop
Program
        ...
