#include "../include/Node.h"

using namespace std;

long Node::uid_count = 0;

Node::Node() {
    ++uid_count;
    this->SetUID(uid_count);

    string init_data_value;

    cout << "Enter data value for node " << this->GetUID() << " : ";
    cin >> init_data_value;
    cin.ignore(256, '\n');
    this->SetValue(init_data_value);
}

Node::Node(string cloned_value) {
    ++uid_count;
    this->SetUID(uid_count);
    this->SetValue(cloned_value);
}

void Node::SetValue(string value) {
    this->data_value = value;
}

string Node::GetValue() {
    return this->data_value;
}

void Node::SetUID(long uid_count) {
    this->uid = uid_count;
}

long Node::GetUID() {
    return this->uid;
}

void Node::PrintNode() {
    cout << "UID: \t\t" << this->GetUID() << endl;
    cout << "> Data value: \t" << this->GetValue() << endl;
}

Node Node::clone() {
    return Node(this->data_value);
}