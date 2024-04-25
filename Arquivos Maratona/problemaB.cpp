#include <iostream>
#include <vector>
#include <cmath>

struct Point {
    int x;
    int y;
    int red;
    int green;
    int blue;
};

struct Rectangle {
    int x1;
    int y1;
    int x2;
    int y2;
};

void calculateAverageColor(const std::vector<Point>& points, const Rectangle& rectangle) {
    int x1 = rectangle.x1;
    int y1 = rectangle.y1;
    int x2 = rectangle.x2;
    int y2 = rectangle.y2;

    int redSum = 0;
    int greenSum = 0;
    int blueSum = 0;
    int count = 0;

    for (const auto& point : points) {
        int x = point.x;
        int y = point.y;
        int red = point.red;
        int green = point.green;
        int blue = point.blue;

        if (x1 <= x && x <= x2 && y1 <= y && y <= y2) {
            redSum += red;
            greenSum += green;
            blueSum += blue;
            count++;
        }
    }

    if (count == 0) {
        std::cout << "0 0 0";
        return;
    }

    int averageRed = round(redSum / double(count));
    int averageGreen = round(greenSum / double(count));
    int averageBlue = round(blueSum / double(count));

    std::cout << averageRed << " " << averageGreen << " " << averageBlue;
}

int main() {
    int numPoints, numQueries;
    std::cin >> numPoints >> numQueries;

    std::vector<Point> points(numPoints);
    for (int i = 0; i < numPoints; i++) {
        std::cin >> points[i].x >> points[i].y >> points[i].red >> points[i].green >> points[i].blue;
    }

    for (int i = 0; i < numQueries; i++) {
        Rectangle rectangle;
        std::cin >> rectangle.x1 >> rectangle.y1 >> rectangle.x2 >> rectangle.y2;
        std::cout << std::endl;
        calculateAverageColor(points, rectangle);
    }

    return 0;
}