#include <iostream>
#include <list>
using namespace std;

// The primary purpose of encapsulation is to hide the internal state of an object
// and restrict direct access to it from outside the class. Instead, interactions
// with the object's data are performed through well-defined interfaces provided
// by the class methods.

// or in easy words we can say we keep members private and methods(functions)
// public and access the members via methods outside the class

class YoutubeChannel
{
private:
  string name;
  string ownerName;
  int subscribersCount;
  list<string> videoTitle;

public:
  // default constructor
  YoutubeChannel() {}
  // parameterized constructor
  YoutubeChannel(string Name, string OwnerName)
  {
    name = Name;
    ownerName = OwnerName;
    subscribersCount = 0;
  }
  // public methods
  void Subscribe()
  {
    subscribersCount++;
  }
  void Unsubscribe()
  {
    if (subscribersCount > 0)
    {
      subscribersCount--;
    }
  }
  void publishVideo(string title)
  {
    videoTitle.push_back(title);
  }
  void printInfo()
  {
    cout << "name of the Channel is _" << name << endl;
    cout << "OwnerName of the Channel is _" << ownerName << endl;
    cout << "subscibers Count _" << subscribersCount << endl;
    cout << "video that are published _" << endl;
    for (string Title : videoTitle)
    {
      cout << Title << endl;
    }
    // for (int i = 0; i < videoTitle.size(); i++) {
    //    cout << videoTitle[i] << endl;
    //  }
  }
};

int main()
{
  YoutubeChannel yt("code beauty", "zaianb");
  yt.publishVideo("web tech video");
  yt.publishVideo("oop concepts");
  yt.Subscribe();
  yt.Subscribe();
  yt.Unsubscribe();
  yt.printInfo();
}