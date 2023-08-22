/*

Link:- https://www.codingninjas.com/studio/problems/flood-fill-algorithm_1089687

*/

void floodFillHelper(vector<vector<int>> &image, int i, int j, int oldColor, int newColor)
{
    // Check if the current coordinates are valid or not.
    if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size())
    {
        // Invalid coordinates. So, return.
        return;
    }

    if (image[i][j] != oldColor)
    {
        // Current pixel has a different colour than starting pixel.
        return;
    }

    if (image[i][j] == newColor)
    {
        // Current pixel has already been visited.
        return;
    }

    // Replace the colour of current pixel.
    image[i][j] = newColor;

    // Recur for adjacent pixels.
    floodFillHelper(image, i, j + 1, oldColor, newColor);
    floodFillHelper(image, i, j - 1, oldColor, newColor);
    floodFillHelper(image, i + 1, j, oldColor, newColor);
    floodFillHelper(image, i - 1, j, oldColor, newColor);
}