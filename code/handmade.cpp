#include "handmade.h"

void RenderWeirdGradient(game_offscreen_buffer *Buffer, uint8 BlueOffset, uint8 GreenOffset)
{
    uint8 *Row = (uint8 *)Buffer->Memory;
    for (int Y = 0;
         Y < Buffer->Height;
         ++Y)
    {
        uint32 *Pixel = (uint32 *)Row;
        for (int X = 0;
             X < Buffer->Width;
             ++X)
        {
            uint8 Blue = (X + BlueOffset);
            uint8 Green = (Y + GreenOffset);

            *Pixel++ = ((Green << 8) | Blue);
        }

        Row += Buffer->Pitch;
    }
}

void GameUpdateAndRender(game_offscreen_buffer *Buffer)
{
    int BlueOffset = 0;
    int GreenOffset = 0;
    RenderWeirdGradient(Buffer, BlueOffset, GreenOffset);
}