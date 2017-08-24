#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string userTime, hour, minute;
    int hours, minutes;
    
    getline(cin, userTime);

    hour = userTime.substr(0,2);
    minute = userTime.substr(3,2);
    
    hours = stoi(hour);
    minutes = stoi(minute);
    
    int time = hours * 60 + minutes;
    
    for (int destinationTime = 120; destinationTime > 0; destinationTime --)
    {
        if ((time >= 420 && time < 600) || (time >= 900 && time < 1140))
        {
            time += 2;
        }
        else
        {
            time ++;
        }
    }
    
    if (time >= 1440)
    {
        time -= 1440;
    }
    
    hours = time / 60;
    minutes = time % 60;
    
    hour = to_string(hours);
    minute = to_string(minutes);
    
    if (hours < 10 && hours >= 0)
    {
        if (minutes < 10 && minutes >= 0)
        {
            cout << "0" + hour + ":0" + minute << endl;
        }
        else
        {
            cout << "0" + hour + ":" + minute << endl;
        }
    }
    else
    {
        if (minutes < 10 && minutes >= 0)
        {
            cout << hour + ":0" + minute << endl;
        }
        else
        {
            cout << hour + ":" + minute << endl;
        }
    }
    
    
    return 0;
}
