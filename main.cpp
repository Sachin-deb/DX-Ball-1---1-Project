int main()
{
    PlaySound("F:\\DX Ball\\Action_Sport.wav", NULL, SND_LOOP | SND_ASYNC|SND_NOSTOP);
    score=0;
    iSetTimer(20,ballchange);
    initialize();
    iInitialize(800,850,"DX_BALL");
    return 0;
}
