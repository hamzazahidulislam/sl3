public class ProdcastPlayer implements PlayerInterface{
    protected String [] playlist;
    protected int currentSong;

    public ProdcastPlayer(String[] playlist) {
        this.playlist = playlist;
        if (playlist.length > 0) {
            this.currentSong = 0;
        } else {
            throw new Error("playlist must have at least one song");
        }
    }

    public ProdcastPlayer(String[] playlist, int currentSong) {
        this.playlist = playlist;
        if (playlist.length > 0 && currentSong < playlist.length) {
            this.currentSong = currentSong;
        } else {
            throw new Error("invalid current song index");
        }
    }

    @Override
    public PlayerInterface play() {
        System.out.println("Playing Video- "+ playlist[currentSong]);
        return this;
    }

    @Override
    public PlayerInterface pause() {
        System.out.println("Pause Video- "+ playlist[currentSong]);
        return this;
    }

    @Override
    public PlayerInterface next() {
        if(currentSong < playlist.length - 1 ){
            currentSong++;
        }else{
            currentSong = 0;
        }
        return this;
    }

    @Override
    public PlayerInterface previous() {
        if(currentSong >0 ){
            currentSong--;
        }else{
            currentSong = playlist.length - 1;
        }
        return this;
    }
}
