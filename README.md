# Matrix Multiplication OOPS

This C++ program performs the multiplication of two matrices using the object-oriented programming (OOPS) concept of operator overloading.

## Usage

1. Compile the `main.cpp` file using a C++ compiler.
2. Run the compiled program.
3. When prompted, enter the dimensions of the first matrix and its elements.
4. Then, enter the dimensions of the second matrix and its elements.
5. The program will perform the matrix multiplication and display the resultant matrix.

Here's an example usage:

```
Enter Dimensions of Matrix 1:
3 3
Enter elements :
1 2 3
4 5 6
7 8 9
Enter Dimensions of Matrix 2:
3 2
Enter elements :
1 4
2 5
3 6
Resultant Matrix (A * B):
14 32
32 77
50 122
```

If the dimensions of the matrices are incompatible for multiplication, the program will throw an `invalid_argument` exception and display an error message.

## Code Explanation

The `Matrix` class encapsulates the matrix data and provides the following member functions:

- `Matrix(int r, int c)`: Constructor to initialize a matrix with the given number of rows and columns.
- `input()`: Allows the user to input the elements of the matrix.
- `display() const`: Prints the matrix to the console.
- `operator*(const Matrix& other)`: Overloads the `*` operator to perform matrix multiplication.

The `main()` function demonstrates the usage of the `Matrix` class by:

1. Prompting the user to enter the dimensions and elements of two matrices.
2. Creating `Matrix` objects for the two input matrices.
3. Performing the matrix multiplication using the overloaded `*` operator.
4. Displaying the resultant matrix.
5. Handling the `invalid_argument` exception if the matrix dimensions are incompatible.

## Dependencies

This program requires a C++ compiler that supports the C++11 standard or later.

## License

This project is licensed under the [MIT License](LICENSE).
