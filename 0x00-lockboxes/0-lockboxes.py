#!/usr/bin/python3
""" locked boxes """


def canUnlockAll(boxes):
    """
    INPUT a list of boxes with it's keys
    OUTPUT true if every box can be open false otherwise
    """

    keys = [x for x in range(1, len(boxes))]
    for box in boxes:
        for key in box:
            if key in keys:
                keys.remove(key)
    return len(keys) == 0
