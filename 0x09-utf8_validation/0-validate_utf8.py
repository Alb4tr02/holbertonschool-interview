#!/usr/bin/python3
"""
checks for a valid utf9 encode
"""


def validUTF8(data):
    """ if data is encoded with a valid utf8 encoded
    returns true
    """

    counter = 0
    flagl = 1 << 7
    flagh = 1 << 6

    for num in data:
        mask = 1 << 7
        if counter == 0:
            while mask & num:
                counter += 1
                mask = mask >> 1

            if counter == 0:
                continue

            if counter == 1 or counter > 4:
                return False
        else:
            if not (num & flagl and not (num & flagh)):
                return False
        counter -= 1
    response = counter == 0
    return response
