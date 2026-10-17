
/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct _IMAGELIST * __thiscall CImageList::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio */

int __fastcall Detach(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = FUN_006367c1(0);
    if (iVar2 != 0) {
      FUN_00631c65(*(undefined4 *)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}

