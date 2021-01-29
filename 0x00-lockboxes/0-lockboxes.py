#!/usr/bin/python3
""" locked boxes """


def canUnlockAll(boxes):
    """
    INPUT a list of boxes with it's keys
    OUTPUT true if every box can be open false otherwise
    """

    keys = [x for x in range(1, len(boxes))]
    for i in range(len(boxes)):
        for key in boxes[i]:
            if key in keys and key != i:
                keys.remove(key)
    return len(keys) == 0
