public class VideoPlayer extends Player{


    public VideoPlayer(String[] playlist) {
        super(playlist);
    }

    public VideoPlayer(String[] playlist, int currentSong) {
        super(playlist, currentSong);
    }

    @Override
    public Player play(){
        System.out.println("Playing Video- "+ playlist[currentSong]);
        return this;
    }

    @Override
    public Player pause(){
        System.out.println("Pause Video- "+ playlist[currentSong]);
        return this;
    }
}
