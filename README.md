# Queue Operations<br>
The queue is implemented using an array with operations like Insertion (Enqueue), Deletion (Dequeue), and Display.

## Features
- **Insert (Enqueue):** Add elements to the queue.
- **Delete (Dequeue):** Remove elements from the queue.
- **Display:** Show current elements in the queue also show front and rear pointers.

## Queue Insertion[Pseudocode].
### QINSERT(QUEUE,FRONT,REAR,ITEM)
This procedure inserts an element ITEM into a queue.[Queue already fill]
1. __If__ FRONT = 1 and REAR = N, or<br>
   __If__ FRONT= REAR + 1,<br>
   - Then: Write: overflow, and Return.
2. [Find new value of REAR]<br>
   __If__ Front:= Null,then :[Queue initially empty.]<br>
   - Set, FRONT:=1 and REAR:=1.
   __Else If__ REAR:=N, then:
   - set,REAR:=1
   __Else:__
   - Set REAR= REAR+1. [End of IF structure].
3. Set QUEUE[REAR]:= ITEM [This inserts new element].
4. Return.
    
