ALuint  Buffer_dungeonWAV;
ALuint  Source_dungeonWAV;
ALint   state_dungeonWAV;

ALfloat dungeonWAV_volume = 0.1;

ALboolean LoadALData()
{
    //////////////////************************************************	
    ALenum format;
	ALsizei size;
	ALvoid* data;
	ALsizei freq;
	ALboolean loop;
    //////////////////************************************************
    //////////////////************************************************	
    //////////////////************************************************ 
    
    
    alGenBuffers(1, &Buffer_dungeonWAV);

	alutLoadWAVFile("AUDIO/laser.wav", &format, &data, &size, &freq, &loop);
	alBufferData(Buffer_dungeonWAV, format, data, size, freq);
	alutUnloadWAV(format, data, size, freq);

	alGenSources(1, &Source_dungeonWAV);

	alSourcef (Source_dungeonWAV, AL_GAIN,     dungeonWAV_volume   );
    alSourcei (Source_dungeonWAV, AL_BUFFER,   Buffer_dungeonWAV   );

	//////////////////------------------------------------------------	
    
    
    return 0;
}


void KillALData()
{
	alDeleteBuffers(1, &Buffer_dungeonWAV);
	alDeleteSources(1, &Source_dungeonWAV);
    alutExit();
}
