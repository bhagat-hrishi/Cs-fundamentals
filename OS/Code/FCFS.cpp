#include <bits/stdc++.h>
using namespace std;

// Here we are considering that arrival time for all processes is 0.

void findWaitingTime(vector<int> &wt, vector<int> &bursttm, int pcnt)
{
    // waiting time for 1st process is 0
    wt[0] = 0;

    for (int i = 1; i < pcnt; i++)
    {
        wt[i] = bursttm[i - 1] + wt[i - 1];
    }
}
void turn_around_time()
{
}

void findAvgTime(vector<int> &p, int pcnt, vector<int> &bursttm)
{
    vector<int> wt(pcnt);
    // calculate wt for all process
    findWaitingTime(wt, bursttm, pcnt);

    vector<int> turn_around_time(pcnt);
}

int main()
{
    // process count
    int pcnt;
    cin >> pcnt;
    std::vector<int> p;

    // enter process id
    for (int i = 0; i < p; i++)
    {
        cin >> tmp;
        p.push_back(tmp);
    }
    // enter brust time for respective process
    vector<int> bursttm;
    for (int i = 0; i < pcnt; i++)
    {
        cin >> tmp;
        bursttm.push_back(tmp);
    }
}
