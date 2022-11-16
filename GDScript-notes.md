# Intro to GODOT

```GDScript
extends <NODE> #This is the type of node that it is

export var speed = 400 #this var is a slide rin the GODOT editor
var screen_size #This i not in the editor

func _ready(): #Runs when node is loaded
    screen_size = get_viewport_rect().size

func _process(delta): #Not called every frame. for physics stuff.
    var velocity = Vector@.ZERO
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

