# Operator Overloading

Look in `./main.cpp`.  We want to print an instance of our PrintMe class using `<<` syntax, just like built-in types:

```
  PrintMe inst("Hello", ", World", "!");

  std::cout << inst << std::endl;
```

Modify the PrintMe class so that this works!