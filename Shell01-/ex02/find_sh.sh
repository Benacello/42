#!/bin/bash


find . -name "*.sh" -print | sed 's/...$/ /' | sed 's/..//'
