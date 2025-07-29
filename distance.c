int main() {
    float u, a, t, distance;

    printf("Enter initial velocity (u in m/s): ");
    scanf("%f", &u);

    printf("Enter acceleration (a in m/s^2): ");
    scanf("%f", &a);

    printf("Enter time (t in seconds): ");
    scanf("%f", &t);

    distance = u * t + 0.5 * a * t * t;

    printf("Distance traveled = %.2f meters\n", distance);

    return 0;
}
