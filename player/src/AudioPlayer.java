public class AudioPlayer extends Player {
    public AudioPlayer(String[] playlist) {
        super(playlist);
    }

    public AudioPlayer(String[] playlist, int currentSong) {
        super(playlist, currentSong);
    }

    @Override
    public Player play(){
        System.out.println("Playing Audio- "+ playlist[currentSong]);
        return this;
    }

    @Override
    public Player pause(){
        System.out.println("Pause Audio- "+ playlist[currentSong]);
        return this;
    }
}
