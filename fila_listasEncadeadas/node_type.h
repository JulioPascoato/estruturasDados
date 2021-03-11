#ifndef NODETYPE_H
#define NODETYPE_H

typedef char ItemType;

struct NodeType
{
    /* data */
    ItemType info;
    NodeType* next;

};

#endif
