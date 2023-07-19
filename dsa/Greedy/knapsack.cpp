#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
    vector<pair<double, int>> ks;
    int cost[3]; int weights[3]; int bag;

    // get the input of weights
    for(int i = 0; i<3; i++) cin>>weights[i];

    // get the input of costs associated
    for(int i = 0; i<3; i++) cin>>cost[i];

    // get the bag capacity
    cin>>bag;

    // initialize the mapped array profits->weights
    for(int i = 0; i<3; i++) {
        double fval = (cost[i]*1.0)/(weights[i]*1.0);
        ks.push_back({fval, weights[i]});
    }

    // sort the mapped array
    sort(ks.begin(), ks.end(), greater<pair<double, int>>());
    

    double sum = 0.00f;
    int it = 0;
    // take the most profitable items out of the bag
    while(1) {
        if(bag-ks[it].second < 0) {
            break;
        }
        sum += ((ks[it].first*1.0)*(ks[it].second*1.0));
        bag = bag-ks[it].second;
        it++;
    }

    //if bag capacity is greater than zero then take out the fractional weights
    if(bag>0) {
        sum += ((ks[it].first*1.0)*(ks[it].second*1.0)*bag)/(ks[it].second*1.0);
    }

    cout<<fixed<<setprecision(1)<<sum<<endl;
    return 0;

}