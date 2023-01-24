# Notes for Tuesday of Week 2

## Loops

+ loops
  - while loop has a condition that evaluates to true or false, the body runs if condition is true. The condition is evaluated *before* the body of the loop is run. This means the body of the loop might run zero times.
```
  while (condition) {
    // body of the loop
    // this will execute zero or more times
   }
```

   - do..while loop. Like a while loop, but the condition is evaluated *after* the body of the loop runs. This means that the loop body will run at least once.
```
    do {
        // body of the loop
        // this will execute one or more times
    } while (condition)
```
   - for loop provides an opportunity for the programmer to define a new variable whose scope is the body of the loop
```    
    for (int x {0}; condition; ++x)  {
        // body of the loop
        // this will execute zero or more times
    }
```
   - for-each loop iterates over each element in a collection exactly once, from beginning to end 
```
    for (auto item : collection)  {

        // type inference is the term when the programmer says to the compiler “You figure out what type this variable is”

        // body of the loop
     
    }
```

## Examples of iteration loops in other languages

### Javascript
```
    items.map(item => { … } )
``` 

### Ruby
```
    1.upto(10) {. … }  
```
