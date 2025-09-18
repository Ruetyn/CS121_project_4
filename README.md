# OOP HorseRace Documentation

## UML diagram
```mermaid
classDiagram
class Horse {
    - int position
    - int index
    - int TRACK_LENGTH
    + Horse()
    + void init(index, trackLength)
    + void advance()
    + void printLane()
    + bool isWinner()
}

class Race {
    - int TRACK_LENGTH
    - int NUM_HORSES
    - Horse horses[NUM_HORSES]
    + Race()
    + void start()
}

Race o-- Horse
```

## Race Class
*Race()*
```
  in header
    const static int NUM_HORSES = 15;
    initialize the length of track
    initialize the array of horses
    
```

## Horse Class
*Horse()*
```
  in header
    initialize the postion variable
    intialize the index variable
    intialize the lenght of track
    
```
