struct cplx {
    double real;
    double imgn;
};
void menu();
void work(int h, struct cplx i, struct cplx j);
void lab2 () {
    struct cplx a, b;
    printf("Enter complex numbers as a+bi:\n");
    scanf("%lg%lgi", &a.real, &a.imgn);
    scanf("%lg%lgi", &b.real, &b.imgn);
    int select;
    while (1){
        select=0;
        system("cls");
        printf("Your numbers are %lg%+lgi and %lg%+lgi\n", a.real, a.imgn, b.real, b.imgn);
        menu(); //keep the ugly printf out of main
        scanf("%d", &select);
        if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5) { // viable options are 1 through 4, 0 exits
            printf("Exiting!\n");
            break;
        }
        work(select, a, b);
    }
}
void menu(){
    printf("What do you want to do with these numbers?\n");
    printf("  1. Addition\n");
    printf("  2. Subtraction\n");
    printf("  3. Multiplication\n");
    printf("  4. Division\n");
    printf("  5. Absolute value\n");
    printf("  0. Exit program\n");
    printf("Your choice: ");
}
void work(int h, struct cplx i, struct cplx j) {
    struct cplx out;
    switch(h){
        case 1 :
            out.real = i.real+j.real;
            out.imgn = i.imgn+j.imgn;
            break;
        case 2 :
            out.real = i.real-j.real;
            out.imgn = i.imgn-j.imgn;
            break;
        case 3 :
            out.real = i.real*j.real-i.imgn*j.imgn;
            out.imgn = i.imgn*j.real+i.real*j.imgn;
            break;
        case 4 :
            out.real = (i.real*j.real+i.imgn*j.imgn)/(j.real+j.real+j.imgn*j.imgn);
            out.imgn = (i.imgn*j.real+i.real*j.imgn)/(j.real*j.real+j.imgn*j.imgn);
            break;
        case 5 : //using out struct to save abs values
            out.real = sqrt(i.real*i.real+i.imgn*i.imgn);
            out.imgn = sqrt(j.real*j.real+j.imgn*j.imgn);
            if (h==5) printf("Abs values of your two numbers are\n%lg\n%lg\n", out.real, out.imgn);
        default :
            break;
    }
    if (h!=5) printf("\nResult is: %lg%+lgi\n", out.real, out.imgn);
    printf("Any key to continue...");
    getch();
};
