#!/bin/sh

ifconfig -a | egrep 'ether '| awk '{print $2}'
