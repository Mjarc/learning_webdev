function fibonacci()
{
    let fibo = [1,1];
    for(let i = 0; i < 8 ; i++)
    {
        fibo[i+2]=fibo[i] + fibo[i+1];
    }
    for(let i = 0; i < 9 ; i++)
        console.log(fibo[i]);
}

fibonacci();

