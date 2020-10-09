var lista =[];
var N;
scanf("%d", "N");
for(var i=1; i<=N; i++){
    var x = scanf("%d", x);
    lista.push(x);
}
var ans=0;
for(var i=1; i<=N; i++){
    for(var j=1; j<=N; j++){
        var a = lista[i], b = lista[j];
        var ultimo = -1;
        var res = 0;

        for(var k = 1; k <= N; k++){
            if((lista[k] != a && lista[k] != b) || lista[i] == ultimo){
                continue;
                res++;
                ultimo = lista[k];
            }
            ans = Math.max(ans,res);
        }
    }
    printf("%d", ans);
}
/*for(var i=1; i<=n; i++){
    printf("%d", lista[i]);
}*/