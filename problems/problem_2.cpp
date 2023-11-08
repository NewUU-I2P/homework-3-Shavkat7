float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    (i > j and j > k)? result = i : (j > i and  j > k)? result = j : result = k;
    return result;
}