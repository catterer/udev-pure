cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_EXE_LINKER_FLAGS "-Wl,--no-as-needed")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wnon-virtual-dtor -ansi -Wcast-align -Wchar-subscripts -Wall -W -Wshadow")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include config.h")

include_directories("${CMAKE_SOURCE_DIR}" /usr/include/libmount)

list(APPEND udev_sources
alloc-util.c
architecture.c
async.c
audit-util.c
barrier.c
bitmap.c
blockdev-util.c
bpf-program.c
btrfs-util.c
bus-label.c
calendarspec.c
capability-util.c
cgroup-util.c
chattr-util.c
clock-util.c
conf-files.c
copy.c
cpu-set-util.c
crypt-util.c
device-nodes.c
device-private.c
dirent-util.c
env-util.c
escape.c
ether-addr-util.c
exec-util.c
exit-status.c
extract-word.c
fd-util.c
fileio.c
fileio-label.c
format-table.c
fs-util.c
gcrypt-util.c
glob-util.c
gunicode.c
hash-funcs.c
hashmap.c
hexdecoct.c
hostname-util.c
hwdb-util.c
in-addr-util.c
io-util.c
khash.c
label.c
libudev.c
libudev-device.c
libudev-device-private.c
libudev-enumerate.c
libudev-hwdb.c
libudev-monitor.c
libudev-queue.c
libudev-util.c
locale-util.c
lockfile-util.c
log.c
login-util.c
memfd-util.c
mempool.c
mkdir.c
mkdir-label.c
mount-util.c
MurmurHash2.c
ordered-set.c
os-util.c
pager.c
parse-util.c
path-util.c
prioq.c
proc-cmdline.c
process-util.c
procfs-util.c
random-util.c
ratelimit.c
reboot-util.c
replace-var.c
rlimit-util.c
rm-rf.c
sd-device.c
sd-hwdb.c
securebits-util.c
selinux-util.c
sigbus.c
signal-util.c
siphash24.c
smack-util.c
socket-label.c
socket-util.c
errno-list.c
stat-util.c
strbuf.c
string-table.c
string-util.c
strv.c
strxcpyx.c
syslog-util.c
terminal-util.c
time-util.c
unit-def.c
unit-name.c
user-util.c
utf8.c
util.c
verbs.c
virt.c
web-util.c
xattr-util.c
xml.c)

add_library(udev SHARED ${udev_sources})
#target_link_libraries (udev pthread)


