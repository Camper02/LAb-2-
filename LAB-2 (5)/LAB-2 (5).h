#pragma once


template<typename VCTR>
class Vector
{
private:
    VCTR* v;
    int s = 0;
public:
    Vector()
    {
        VCTR* v = new VCTR[s];
    }
    ~Vector()
    {
        delete[] v;
    }
    VCTR push_back(bool inp)
    {
        return v[s++] = inp;
    }
    bool& operator[](int ind)
    {
        return v[ind];
    }
    int size()
    {
        return s;
    }
    VCTR insert(bool inp, int ind)
    {
        int k = s;
        VCTR* v1 = v;
        while (s > 0)
        {
            v[s--];
        }
        for (int i = 0; i < k - 1; i++)
        {
            if (i == ind)
            {
                v[s++] = inp;
            }
            v[s++] = v1[i];

        }
        return v;
    }
    VCTR erase(int s_i, int c = 1)
    {
        int k = s + 1;
        VCTR* v1 = v;
        while (s > 0)
        {
            v[s--];
        }
        for (int i = 0; i < k; i++)
        {
            if (i < s_i or i > s_i + c - 1)
            {
                v[s++] = v1[i];
            }
        }
        return v;
    }
};

