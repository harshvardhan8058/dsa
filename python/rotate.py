def rotate_matrix(matrix):
    # Create a new empty matrix
    rotated_matrix = [[0 for _ in range(5)] for _ in range(5)]

    for i in range(5):
        for j in range(5):
            # Rotate the elements by 90 degrees
            rotated_matrix[j][4-i] = matrix[i][j]

    return rotated_matrix

# Test the code
matrix = [[1, 2, 3, 4, 5],
          [6, 7, 8, 9, 10],
          [11, 12, 13, 14, 15],
          [16, 17, 18, 19, 20],
          [21, 22, 23, 24, 25]]

rotated_matrix = rotate_matrix(matrix)

# Print the rotated matrix
for row in rotated_matrix:
    print(row)