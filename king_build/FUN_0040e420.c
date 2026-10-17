
undefined * FUN_0040e420(undefined4 param_1)

{
  char *_Source;
  size_t _Count;
  
  _Count = 0x100;
  _Source = (char *)FUN_0040e1d0(param_1);
  _strncpy(&DAT_0068bd0c,_Source,_Count);
  _strncat(&DAT_0068bd0c,&DAT_0066b4e4,0x100);
  return &DAT_0068bd0c;
}

