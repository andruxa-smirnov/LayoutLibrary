#ifndef GRAPHLAYOUTERRORCODES_H
#define GRAPHLAYOUTERRORCODES_H

#include <GraphLayoutLibrary_global.h>
#include<LayoutException/LayoutExceptionEnum.h>

/**
 * @brief The GraphLayoutErrorCodes class
 *
 * The class provides layout related error codes.
 */
class GRAPHLAYOUTLIBRARYSHARED_EXPORT GraphLayoutErrorCodes
{
public:
    /**
     *  Constructs object of GraphLayoutErrorCodes
     */
    GraphLayoutErrorCodes();

	/**
     *  Enum for codes of errors generated by layout library
     */
    enum LayoutErrorCode
    {
        LAYOUT_SUCCESS = 0,
        FILE_NOT_FOUND = LayoutExceptionEnum::FILE_NOT_FOUND,
        INVALID_FILE_NAME = LayoutExceptionEnum::INVALID_FILE_NAME,
        UNSUPPORTED_FILE_TYPE = LayoutExceptionEnum::UNSUPPORTED_FILE_TYPE,
        UNSUPPORTED_FILE_FORMAT = LayoutExceptionEnum::UNSUPPORTED_FILE_FORMAT,
        FILE_READ_OPERATION_ERROR = LayoutExceptionEnum::FILE_READ_OPERATION_ERROR,
        DIRECTORY_NOT_FOUND = LayoutExceptionEnum::DIRECTORY_NOT_FOUND,
        LAYOUT_INVALID_FILE_FORMAT = LayoutExceptionEnum::LAYOUT_INVALID_FILE_FORMAT,
        INVALID_FILE_OPERATION = LayoutExceptionEnum::INVALID_FILE_OPERATION,
        UNKNOWN_FILE_IOEXCEPTION = LayoutExceptionEnum::UNKNOWNFILEIOEXCEPTION,
        UNKNOWN_LAYOUT_EXCEPTION = LayoutExceptionEnum::UNKNOWNLAYOUTEXCEPTION

    };
};

#endif // GRAPHLAYOUTERRORCODES_H