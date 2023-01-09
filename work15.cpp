#include <iostream>
using namespace std;
float pipeone(float flowrate1,float hour);
float pipetwo(float flowrate2,float hour);
float overflow(float volumeofpool,float filled);
float filled;
float flowrate1;
float flowrate2;
float volumeofpool;
float volume;
main()
{
    float hour;
    float result1;
    float result2;
    float result3;
    float pipe1;
    float pipe2;
    cout <<"volume of pool";
    cin >> volumeofpool;
    cout <<"flow rate of pipe1";
    cin >> flowrate1;
    cout <<"flow rate of pipe 2";
    cin >> flowrate2;
    cout <<"enter hours";
    cin >> hour;
    result1 = pipeone(flowrate1,hour);
    result2 = pipetwo(flowrate2,hour);
    filled = result1+result2;
    float totalfilled;
    totalfilled = filled/volumeofpool;
    result2 = pipetwo(flowrate2,hour);
    filled = result1+result2;
    totalfilled = filled/volumeofpool;
    float perfilled;
    perfilled = totalfilled*100;
    cout <<"the pool is filled" << perfilled <<"%" << endl;
    pipe1 = result1/filled*100;
    cout <<"pipe 1:" << pipe1 <<"%" << endl;
    pipe2 = result2/filled*100;
    cout <<"pipe2" << pipe2 <<"%" << endl;
    result3 = overflow(volumeofpool,filled);
    cout <<"for" << hour <<"pool overflows with" << volume << "litters";
}
float pipeone(float flowrate1,float hour)
{
float flow_1;
float perflow1;
flow_1 = flowrate1+hour;
return flow_1;
}
float pipetwo(float flowrate2,float hour)
{
    float flow_2;
    float perflow2;
    flow_2 = flowrate2*hour;
    return flow_2;
}
float overflow (float volumeofpool,float filled)
{
    if(filled > volumeofpool)
    {
        volume = filled - volumeofpool;
    }
    return volume;
}




