 #include <stdio.h>
void calc(float distance, float time);

int main() {
    float distancecovered = 89.1;
    float Timetaken = 2.2;
    calc(distancecovered, Timetaken);

    return 0;
}

void calc(float distance, float time) {
    float avgspeed = distance / time;
    float avgdistancein1hr = avgspeed * 1;

    printf("Average distance in 1 hour = %f\n", avgdistancein1hr);
}
