#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double calculateDistance(struct Point p1, struct Point p2) {
    double distance;
    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
}

int main() {
    struct Point point1, point2;
    double distance;

    // Input the coordinates of the first point
    printf("Enter the coordinates of the first point:\n");
    printf("x1: ");
    scanf("%lf", &point1.x);
    printf("y1: ");
    scanf("%lf", &point1.y);

    // Input the coordinates of the second point
    printf("Enter the coordinates of the second point:\n");
    printf("x2: ");
    scanf("%lf", &point2.x);
    printf("y2: ");
    scanf("%lf", &point2.y);

    // Calculate the distance
    distance = calculateDistance(point1, point2);

    // Output the result
    printf("The distance between the two points is: %.2lf\n", distance);

    return 0;
}