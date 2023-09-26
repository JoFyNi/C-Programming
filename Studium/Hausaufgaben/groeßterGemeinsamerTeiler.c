int main() {
    // Algorithmus zum berechnen des größten gemeinsamen Teilers

    int zahl1 = 16;
    int zahl2 = 10;
    int x;
    int y;
    
    printf("Prüfe: %d %d %s", zahl1, zahl2, "\n");
    //printf("Prüfe: %d\n", zahl2);

    if (zahl1 > 0, zahl2 > 0) {
        x = zahl1;
        y = zahl2;
        printf("x = %d %s %d %s", zahl1, " y = ", zahl2, "\n");

        vergleiche(x,y,zahl1,zahl2);
    } else {
        return;
    } 

    return 0;
}

int vergleiche(int x, int y, int zahl1, int zahl2) {
    // vergleiche x und y bis x = y 
    // wenn x = y, x = ggT von zahl1 und zahl2
    int ggt;
    
    printf("Vergleiche [x|y]: %d %d %s", x, y, "\n");
    if (y < x)
    {   
        x = x - y;
        printf("x = %d%s%s%d%s", x, "\n", "y = ", y, "\n");
        vergleiche(x,y,zahl1,zahl2);
    } else if (y > x) {
        y = y - x;
        printf("x = %d%s%s%d%s", x, "\n", "y = ", y, "\n");
        vergleiche(x,y,zahl1,zahl2);
    } else if (x = y) {
        ggt = x;
        printf("Der ggT von %d %s %d %s %d %s", zahl1, " und ", zahl2, " ist ", ggt, "\n");

        return 0;
    }
}