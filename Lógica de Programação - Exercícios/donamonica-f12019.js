var m, a, b;
scanf("%d%d%d", m, c, b);
var c = m - (a+b);
if(a > b && a > c){
    scanf("%d", a);
} else if (b > a && b > c){
    scanf("%d", b);
} else {
    scanf("%d", c);
}