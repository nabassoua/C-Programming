Mass memory devices
======================

lsblk
lsblk -f
sudo sfdisk -l


MBR and partitions table
======================

### WARNING - You need to be sure of your device name ! #
export DISK=/dev/<your_device_name>

### Delete last partitions table #
sudo blockdev --getbsz ${DISK}

sudo dd if=/dev/zero bs=1K count=10K of=${DISK}

lsblk

sudo dd if=${DISK} bs=1K count=1 of=./mbr.bin

xxd ./mbr.bin > mbr.txt

### Create a new partitions table (solution 1) #
sudo sfdisk ${DISK}
>>> help -> [ENTER]
>>> ,,, -> [ENTER]
>>> [ctrl] + [d]
>>> Y -> [ENTER]

sudo dd if=${DISK} bs=1K count=1 of=./mbr.bin

xxd ./mbr.bin > mbr.txt

file mbr.bin

lsblk

### Create a new partitions table (solution 2) #
sudo sfdisk ${DISK} <<__EOF__
,,,
__EOF__


Format partition with file system
======================

lsblk -f

sudo mkfs.vfat -n root ${DISK}1

lsblk -f

### Look for vFAT file system technology #
sudo dd if=${DISK} bs=1K count=2K  of=./fs_fat32.bin

xxd ./fs_fat32.bin > fs_fat32.txt


Mounting point 
======================

### WARNING - You need to be sure of your mounting point path ! #
export MEDIA=/media/<user_name>

sudo mkdir -p ${MEDIA}/root/

sudo mount ${DISK}1 ${MEDIA}/root/

lsblk -f

### WARNING - Never forget to unmount partition ! #
echo "Hello World Bro's !" > hello.txt

sudo cp hello.txt ${MEDIA}/root/

sync

sudo umount ${MEDIA}/root


Kali\Linux on USB bootable
======================

