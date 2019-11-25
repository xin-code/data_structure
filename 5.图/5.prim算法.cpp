void prim(int n,float MGraph[][n],int v0,float &sum)
{
    int lowcost[n],vSet[n];
    int v,k,min;
    for (int i = 0; i < n; ++i)
    {
        lowcost[i]=MGraph[v0][i];
        vSet[i]=0;
    }
    v=v0;
    vSet(v)=1;
    sum=0;
    for (int i = 0; i < n-1; ++i)
    {
        min=INF;
        for (int j = 0; j < n; ++j)
            if (vSet[j]==0&&lowcost[j]<min)
            {
                min=lowcost[j];
                k=j;
            }
            vSet[k]=1;
            v=k;
            sum+=min;
            for (int j = 0; j < n; ++j)
                if (vSet[j]==0&&MGraph[v][j]<lowcost[j])
                    lowcost[j]=MGraph[v][j];   
    }
    
    
}