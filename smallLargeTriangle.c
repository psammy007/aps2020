

struct node
{
    int area;
    int index;
};

typedef struct node node;

void sort_by_area(triangle* tr, int n)
{
	int i,j,min;
    float p,ar,a,b,c,t;
    float *arr = malloc(n * sizeof(float));
    for(i=0;i<n;i++)
    {
        p = (tr[i].a + tr[i].b + tr[i].c)/2.0;
        arr[i] = (p * (p-tr[i].a) * (p-tr[i].b) * (p-tr[i].c));
    }
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min = j;
        }
        t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
        a = tr[min].a;
        b = tr[min].b;
        c = tr[min].c;
        tr[min].a = tr[i].a;
        tr[min].b = tr[i].b;
        tr[min].c = tr[i].c;
        tr[i].a = a;
        tr[i].b = b;
        tr[i].c = c;
    }

}


