#
# Copyright 2021 The University of Queensland
# Author: Alex Wilson <alex@uq.edu.au>
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

.PATH:		${.CURDIR}/http-parser

PROG=		prom-exporter
MAN=

# core modules
SRCS=		main.c log.c metrics.c

# http_parser modules
SRCS+=		http_parser.c

# collector modules
SRCS+=		collect_pf.c
SRCS+=		collect_cpu.c
SRCS+=		collect_if.c
SRCS+=		collect_uvm.c
SRCS+=		collect_pools.c
SRCS+=		collect_procs.c
SRCS+=		collect_disk.c
SRCS+=		collect_ip.c

CFLAGS+=	-fno-strict-aliasing -fstack-protector-all \
	   	-fwrapv -fPIC -Wall -g -ggdb -O0
LDADD=-levent
DPADD=${LIBEVENT}

.phony: make_tests
make_tests:
	mkdir tests 2>/dev/null

.phony: test
test: all make_tests
	./run_test.sh

.phony: clean_test
clean_tests: clean
	rm -rf prom.log tests 2>/dev/null

.include <bsd.prog.mk>
