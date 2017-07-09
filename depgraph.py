#!/usr/bin/python
#code from StackOverflow
depGraph = {

    "a" : [ "b" ],
    "b" : [ "c" ],
    "c" :  [ 'e'],
    'e' : ['g' ],
    "d" : [ ],
    "f" : ["e" , "d"],
    "g" : []
}


given = [ "b", "c", "a", "d", "e", "f" , "g"]

def retDeps(visited, start):

    queue = []
    out = []
    queue.append(start)

    while queue:
        newNode = queue.pop(0)
        if newNode not in visited:
            visited.add(newNode)

        for child in depGraph[newNode]:
            queue.append(child)
            out.append(child)

    out.append(start)

    return out


def retDepGraph():

    visited = set()
    out = []

    # visited.add(given[0])
    for pac in given:
        if pac in visited:
            continue

        visited.add(pac)
        #out.append(pac)

        if pac in depGraph:

            # find all children
            for child in depGraph[pac]:
                if child in visited:
                    continue
                out.extend(retDeps(visited, child))

        out.append(pac)

    print(out)

retDepGraph()
