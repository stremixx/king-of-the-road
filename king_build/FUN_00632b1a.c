
void __fastcall FUN_00632b1a(int *param_1)

{
  CTypeLibCache *this;
  
  FUN_0063a70e(0xd);
  this = (CTypeLibCache *)(**(code **)(*param_1 + 0x20))();
  if (this != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this);
  }
  FUN_0063a77e(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

