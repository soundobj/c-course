#!/bin/sh
ldapwhoami -Q | sed -n 's/^dn://p'
