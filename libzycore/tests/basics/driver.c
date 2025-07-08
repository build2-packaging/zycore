#include <Zycore/Allocator.h>
#include <Zycore/Defines.h>
#include <Zycore/LibC.h>
#include <Zycore/String.h>
#include <Zycore/Types.h>

#undef NDEBUG
#include <assert.h>

int
main (void)
{
  ZyanString s;
  if (!ZYAN_SUCCESS (ZyanStringInit (&s, 0)))
    return 1;

  ZyanStringView v = ZYAN_DEFINE_STRING_VIEW ("hello world");
  if (!ZYAN_SUCCESS (ZyanStringAppend (&s, &v)))
    return 2;

  const char* cstr = NULL;
  if (!ZYAN_SUCCESS (ZyanStringGetData (&s, &cstr)))
    return 3;

  printf ("zycore string = '%s'\n", cstr);
  ZyanStringDestroy (&s);
  return 0;
}
