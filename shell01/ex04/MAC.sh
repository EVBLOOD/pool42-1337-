#!/bin/sh
ifconfig -a | grep ether | grep -v "ethernet" | cut -d' ' -f 2
