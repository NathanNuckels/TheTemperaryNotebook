# Intro to GODOT

```GDScript
extends <NODE> #This is the type of node that it is

export var speed = 400 #this var is a slide rin the GODOT editor
var screen_size #This i not in the editor

func _ready(): #Runs when node is loaded
    screen_size = get_viewport_rect().size

func _process(delta): #Not called every frame. for physics stuff.
    velocity = Vector2.ZERO
    if Input.is_action_pressed("move_right"):
        velocity.x+=1
    if Input.is_action_pressed("move_left"):
        velocity.x-=1;
    if Input.is_action_pressed("move_down"):
        velocity.y+=1
    if Input.is_action_pressed("move_up"):
        velocity.y-=1
    if velocity.length()>0:
        velocity=velocity.normalized()*speed
        $AnimatedSprite.play()
    else:
        $AnimatedSprite.stop()
    position+=velocity*delta
    position.x=clamp(position.x,0,screen_size.x)
    position.y=clamp(position.y,0,screen_size.y)
    if velocity.x!=0:
        $AnimatedSprite.animation="walk"
        $AnimatedSprite.flip_h and flip_v
```

I stopped transcribing there.

Lets see if we can define Kirim.

```GDScript
extends KinmaticBody2D

var floating=false
var screen_size
var velocity
export var GRAVITY = 200.0
export var ANTI_GRAVITY = 50
export var speed = 400
export var JUMP = 1000

func _ready():
    screen_size=get_viewport_rect().size

func _physics_process(delta):
    if !float:
        velocity.y+=GRAVITY*delta
    else:
        velocity.y+=ANTI_GRAVITY*delta
    
    if Input.is_action_pressed("left"):
        velocity.x= -speed
    elif Input.is_action_pressed("right"):
        velocity.x=speed
    else:
        velocity.x=0
    if Input.is_action_pressed("up"):
        velocity.y=-JUMP
    if Input.is_action_pressed("float"):
        float=true
    if Input.is_action_pressed("down"):
        float=false
    move_and_slide(velocity,Vector2(0,-1))
    
func _process(delta): #For animation
    # note that '$sprite' refers to an AnimatedSprite node
    if !float:
        $sprite.playing=(velocity.x!=0) #if velocity.x==0, playing=false; else, playing=true;
        if velocity.x>0:
            $sprite.animation="walk"
            $sprite.flip_h=false
        if velocity.x<0:
            $sprite.animation="walk"
            $sprite.flip_h=true
        if velocity.y>0:
            $sprite.animation="flying"
        if velocity.y>0:
            $sprite.animation="falling"
        if velocity.x==0 and velocity.y==0:
            $sprite.animation="idle"
    else:
        if velocity.x>0:
            $sprite.flip_h=false
        if velocity.x<0:
            $sprite.flip_h=true
        $sprite.animation="float"
```
Notes: There must me an idle image, a walk animation, a flying image, falling image, and float image, all facing to the right.

Thats all for now. See you once I finish my huge backlog of work
        
