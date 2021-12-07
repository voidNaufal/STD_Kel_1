#include "MLL.h"

void createList_1303204141(List_furniture &L)
{
    first(L) = NULL;
}

void createList_1303204141(List_pengerajin &L)
{
    first(L) = NULL;
}
elm_furniture createElement_1303204141(string nama)
{
    adr_furniture P = new elm_furniture;
    info(P).nama = nama;
    next(P) = NULL;
    nextClass(P) = NULL;
    return P;
}

elm_pengerajin createElement_1303204141(string nama, int umur)
{
    adr_furniture P = new elm_furniture;
    info(P).nama = nama;
    info(P).umur = umur;
    next(P) = NULL;
    return P;
}

void insertFirst_1303204141(List_furniture &L, adr_furniture P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertFirst_1303204141(List_pengerajin &L, adr_pengerajin P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast_1303204141(List_furniture &L, adr_furniture P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        adr_furniture Q;
        Q = first(L);

        while(next(Q) != NULL)
        {
            Q = next(Q);
        }

        next(Q) = P:
    }
}

void insertLast_1303204141(List_pengerajin &L, adr_pengerajin P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        adr_pengerajin Q;
        Q = first(L);

        while(next(Q) != NULL)
        {
            Q = next(Q);
        }

        next(Q) = P:
    }
}

void deleteAfter_1303204141(List_furniture &L, adr_furniture &prec, adr_furniture &P)
{
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}

void deleteAfter_1303204141(List_pengerajin &L, adr_pengerajin &prec, adr_pengerajin &P)
{
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}

void deleteLast_1303204141(List_furniture &L, adr_furniture &P)
{
    if(first(L) == NULL)
    {
        cout << "Furniture List Is Empty" << endl;
    }else if(next(first(L)) == NULL)
    {
        P = first(L);
        first(L) == NULL;
    }else
    {
        adr_furniture Q;
        Q = first(L);

        while (next(Q) != NULL)
        {
            P = Q;
            Q = next(Q);
        }

        next(P) = NULL;
        nextClass(Q) = NULL;
        P = Q;
    }
}

void deleteLast_1303204141(List_pengerajin &L, adr_pengerajin &P)
{
    if(first(L) == NULL)
    {
        cout << "Pengerajin List Is Empty" << endl;
    }else if(next(first(L)) == NULL)
    {
        P = first(L);
        first(L) == NULL;
    }else
    {
        adr_furniture Q;
        Q = first(L);

        while (next(Q) != NULL)
        {
            P = Q;
            Q = next(Q);
        }

        next(P) = NULL;
        P = Q;
    }
}
