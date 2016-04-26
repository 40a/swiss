/*++

Copyright (c) 2012 Minoca Corp.

This project is dual licensed. You are receiving it under the terms of the
GNU General Public License version 3 (GPLv3). Alternative licensing terms are
available. Contact info@minocacorp.com for details. See the LICENSE file at the
root of this project for complete licensing information.

Module Name:

    status.h

Abstract:

    This header contains definitions for kernel mode status codes.

Author:

    Evan Green 3-Jul-2012

--*/

//
// ---------------------------------------------------------------- Definitions
//

#define STATUS_SUCCESS                    0
#define STATUS_UNSUCCESSFUL               0x80000001
#define STATUS_NOT_FOUND                  0x80000002
#define STATUS_NOT_CONFIGURED             0x80000003
#define STATUS_INTERRUPTED                0x80000004
#define STATUS_ACCESS_VIOLATION           0x80000005
#define STATUS_BROKEN_PIPE                0x80000006
#define STATUS_INSUFFICIENT_RESOURCES     0x80000007
#define STATUS_INVALID_HANDLE             0x80000008
#define STATUS_DATA_PAGED_OUT             0x80000009
#define STATUS_FIRMWARE_ERROR             0x8000000A
#define STATUS_MEMORY_CONFLICT            0x8000000B
#define STATUS_FILE_CORRUPT               0x8000000C
#define STATUS_INVALID_PARAMETER          0x8000000D
#define STATUS_NO_SUCH_DEVICE             0x8000000E
#define STATUS_NO_SUCH_FILE               0x8000000F
#define STATUS_INVALID_DIRECTORY          0x80000010
#define STATUS_END_OF_FILE                0x80000011
#define STATUS_RANGE_CONFLICT             0x80000012
#define STATUS_VERSION_MISMATCH           0x80000013
#define STATUS_NAME_TOO_LONG              0x80000014
#define STATUS_UNKNOWN_IMAGE_FORMAT       0x80000015
#define STATUS_NOT_SUPPORTED              0x80000016
#define STATUS_NO_MEMORY                  0x80000017
#define STATUS_DUPLICATE_ENTRY            0x80000018
#define STATUS_NO_ELIGIBLE_DEVICES        0x80000019
#define STATUS_UNKNOWN_DEVICE             0x8000001A
#define STATUS_TOO_EARLY                  0x8000001B
#define STATUS_TOO_LATE                   0x8000001C
#define STATUS_DRIVER_FUNCTION_MISSING    0x8000001D
#define STATUS_NO_DRIVERS                 0x8000001E
#define STATUS_NOT_HANDLED                0x8000001F
#define STATUS_NO_INTERFACE               0x80000020
#define STATUS_INCORRECT_BUFFER_SIZE      0x80000021
#define STATUS_ACCESS_DENIED              0x80000022
#define STATUS_BUFFER_TOO_SMALL           0x80000023
#define STATUS_DEVICE_IO_ERROR            0x80000024
#define STATUS_UNRECOGNIZED_FILE_SYSTEM   0x80000025
#define STATUS_FILE_IS_DIRECTORY          0x80000026
#define STATUS_NOT_A_DIRECTORY            0x80000027
#define STATUS_VOLUME_CORRUPT             0x80000028
#define STATUS_VOLUME_FULL                0x80000029
#define STATUS_FILE_EXISTS                0x8000002A
#define STATUS_PATH_NOT_FOUND             0x8000002B
#define STATUS_RESOURCE_IN_USE            0x8000002C
#define STATUS_NOT_ALIGNED                0x8000002D
#define STATUS_OUT_OF_BOUNDS              0x8000002E
#define STATUS_DATA_LENGTH_MISMATCH       0x8000002F
#define STATUS_INVALID_OPCODE             0x80000030
#define STATUS_MALFORMED_DATA_STREAM      0x80000031
#define STATUS_MORE_PROCESSING_REQUIRED   0x80000032
#define STATUS_ARGUMENT_EXPECTED          0x80000033
#define STATUS_CONVERSION_FAILED          0x80000034
#define STATUS_DIVIDE_BY_ZERO             0x80000035
#define STATUS_UNEXPECTED_TYPE            0x80000036
#define STATUS_TIMEOUT                    0x80000037
#define STATUS_PARITY_ERROR               0x80000038
#define STATUS_NOT_READY                  0x80000039
#define STATUS_BUFFER_OVERRUN             0x8000003A
#define STATUS_INVALID_CONFIGURATION      0x8000003B
#define STATUS_NOT_STARTED                0x8000003C
#define STATUS_OPERATION_CANCELLED        0x8000003D
#define STATUS_NO_DATA_AVAILABLE          0x8000003E
#define STATUS_BUFFER_FULL                0x8000003F

#define STATUS_NOT_IMPLEMENTED            0x80000040
#define STATUS_SERIAL_HARDWARE_ERROR      0x80000041
#define STATUS_NOT_INITIALIZED            0x80000042
#define STATUS_NO_SUCH_THREAD             0x80000043
#define STATUS_NO_SUCH_PROCESS            0x80000044
#define STATUS_INVALID_ADDRESS            0x80000045
#define STATUS_NO_NETWORK_CONNECTION      0x80000046
#define STATUS_DESTINATION_UNREACHABLE    0x80000047
#define STATUS_CONNECTION_RESET           0x80000048
#define STATUS_CONNECTION_EXISTS          0x80000049
#define STATUS_CONNECTION_CLOSED          0x8000004A
#define STATUS_TOO_MANY_CONNECTIONS       0x8000004B
#define STATUS_ADDRESS_IN_USE             0x8000004C
#define STATUS_NOT_A_SOCKET               0x8000004D
#define STATUS_OPERATION_WOULD_BLOCK      0x8000004E
#define STATUS_TRY_AGAIN                  0x8000004F
#define STATUS_INVALID_SEQUENCE           0x80000050
#define STATUS_INTEGER_OVERFLOW           0x80000051
#define STATUS_PARENT_AWAITING_REMOVAL    0x80000052
#define STATUS_DEVICE_QUEUE_CLOSING       0x80000053
#define STATUS_CHECKSUM_MISMATCH          0x80000054
#define STATUS_NOT_A_TERMINAL             0x80000055
#define STATUS_DEVICE_NOT_CONNECTED       0x80000056
#define STATUS_DIRECTORY_NOT_EMPTY        0x80000057
#define STATUS_CROSS_DEVICE               0x80000058
#define STATUS_NO_MATCH                   0x80000059
#define STATUS_NOT_A_MOUNT_POINT          0x8000005A
#define STATUS_NOT_MOUNTABLE              0x8000005B
#define STATUS_NO_ELIGIBLE_CHILDREN       0x8000005C
#define STATUS_MISSING_IMPORT             0x8000005D
#define STATUS_TOO_MANY_HANDLES           0x8000005E
#define STATUS_NOT_BLOCK_DEVICE           0x8000005F
#define STATUS_NO_MEDIA                   0x80000060
#define STATUS_ALREADY_INITIALIZED        0x80000061
#define STATUS_INVALID_ADDRESS_RANGE      0x80000062
#define STATUS_NOT_SUPPORTED_BY_PROTOCOL  0x80000063
#define STATUS_MESSAGE_TOO_LONG           0x80000064
#define STATUS_NOT_CONNECTED              0x80000065
#define STATUS_DESTINATION_REQUIRED       0x80000066
#define STATUS_PERMISSION_DENIED          0x80000067
#define STATUS_SYMBOLIC_LINK_LOOP         0x80000068
#define STATUS_BROKEN_PIPE_SILENT         0x80000069
#define STATUS_NO_SUCH_DEVICE_OR_ADDRESS  0x8000006A
#define STATUS_DOMAIN_NOT_SUPPORTED       0x8000006B
#define STATUS_PROTOCOL_NOT_SUPPORTED     0x8000006C
#define STATUS_DOMAIN_ERROR               0x8000006D

//
// ------------------------------------------------------ Data Type Definitions
//

typedef ULONG KSTATUS;

//
// --------------------------------------------------------------------- Macros
//

#define KSUCCESS(_Status) ((_Status) == STATUS_SUCCESS)
#define KSTATUS_CODE(_Status) ((_Status) & 0x7FFFFFFF)

//
// ----------------------------------------------- Internal Function Prototypes
//

