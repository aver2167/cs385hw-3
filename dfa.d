import std.stdio;
import std.array;
import std.string;
import std.algorithm;
import std.conv;
import std.container;
import std.typecons;
import std.functional;
import superstate;

void main()
{
  SuperState stateRecords = new SuperState;
  string name;
  stateRecords.queryAlphabet;
  stateRecords.queryStateName;
  stateRecords.addStartStateToDfa();
  stateRecords.printStateList;
}
